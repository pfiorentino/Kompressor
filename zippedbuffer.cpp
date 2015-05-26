#include "zippedbuffer.h"

ZippedBuffer::ZippedBuffer()
{
}

void ZippedBuffer::setFileName(const QString &fileName) {
    _fileName = fileName;
}

const QString ZippedBuffer::getFileName() {
    return _fileName;
}

void ZippedBuffer::setCFileContent(const QByteArray &cFileContent) {
    _cFileContent = cFileContent;
}

const QByteArray ZippedBuffer::getCFileContent() {
    return _cFileContent;
}

void ZippedBuffer::write(QDataStream &stream) {
    stream << _fileName;
    stream << _cFileContent;
}

void ZippedBuffer::read(QDataStream &stream) {
    stream >> _fileName;
    stream >> _cFileContent;
}

