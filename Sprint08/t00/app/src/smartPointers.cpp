#include "Player.h"
#include "Map.h"
#include "MoveManag.h"

//Player.h
void Player::movePlayer(MoveManager::Direction dir) {
    switch (dir) {
    case MoveManager::Direction::Up:
        --m_posY;
        break;
    case MoveManager::Direction::Down:
        ++m_posY;
        break;
    case MoveManager::Direction::Left:
        --m_posX;
        break;
    default:
        ++m_posX;
        break;
    }
}

char Player::getIdentifier() const {
    return 'P';
}

size_t Player::posX() const {
    return m_posX;
}
size_t Player::posY() const {
    return m_posY;
}

//Map.h
Map::Map(size_t width, size_t height, std::shared_ptr<Player> &player) : m_width(width), m_height(height),
                                                                         m_player(player),
                                                                         m_map(std::make_unique<char[]>(width * height)) {
    generateMap();
}

void Map::outputMap() const {
    auto it = m_map.get();
    for (size_t i = 0; i < m_width; i++) {
        for (size_t j = 0; j < m_height; j++) {
            if ((i * m_height + j) == (m_player->posY() * m_height + m_player->posX()))
                std::cout << m_player->getIdentifier();
            else
                std::cout << *it;
            if (j != m_height - 1)
                std::cout << " ";
            it++;
        }
        std::cout << std::endl;
    }
}
size_t Map::width() const {
    return m_width;
}
size_t Map::height() const {
    return m_height;
}

void  Map::generateMap() {
    auto it = m_map.get();
    for (size_t i = 0; i < m_width * m_height; i++, it++) {
        int rand = random() % 3;
        if (rand == 0)
            *it = '.';
        else if (rand == 1)
            *it = 'T';
        else
            *it = '@';
    }
}

// //MoveManager.h
MoveManager::MoveManager(std::shared_ptr<Player>& player, std::shared_ptr<Map>& map) :  m_map(map) {
    m_player = player;
}

bool MoveManager::checkMove(Direction dir) const {
    if (dir == Direction::Up && m_player->posY() != 0)
        return true;
    else if (dir == Direction::Down && m_player->posY() != m_map->height() - 1)
        return true;
    else if (dir == Direction::Left && m_player->posX() != 0)
        return true;
    else if (dir == Direction::Right && m_player->posX() != m_map->width() - 1)
        return true;
    else {
        std::cerr << "Invalid direction" << std::endl;
        return false;
    }
}

void MoveManager::processInputAndMove(const std::string& inputStr) {
    if (inputStr == "u" && checkMove(Direction::Up))
        m_player->movePlayer(Direction::Up);
    else if (inputStr == "d" && checkMove(Direction::Down))
        m_player->movePlayer(Direction::Down);
    else if (inputStr == "l" && checkMove(Direction::Left))
        m_player->movePlayer(Direction::Left);
    else if (inputStr == "r" && checkMove(Direction::Right))
        m_player->movePlayer(Direction::Right);
    else if (inputStr == "e")
        exit(1);
}
