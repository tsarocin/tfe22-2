#include "vectorint.hpp"

VectorInt::VectorInt(int size) {
    mp_Data = new int[size];
    m_size = size;
}

VectorInt::~VectorInt() {
    if(mp_Data != nullptr) {
        delete [] mp_Data;
    }
    mp_Data = nullptr;
}

int& VectorInt::at( size_t pos ){
    if(pos < m_size) {
        return mp_Data[m_size];
    }
    // better use an exception!
    return m_null;
}

size_t VectorInt::size() const {
    return m_size;
}

void VectorInt::resize( size_t count ) {

}
void VectorInt::push_back( const int& value ) {

}