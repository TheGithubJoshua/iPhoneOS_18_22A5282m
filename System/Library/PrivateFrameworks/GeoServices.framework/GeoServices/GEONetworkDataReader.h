@class NSMutableData;

@interface GEONetworkDataReader : NSObject {
    NSMutableData *_data;
    unsigned long long _dataLength;
    const void *_bytes;
    unsigned long long _bookmarkOffset;
    unsigned long long _offset;
}

- (id)readString;
- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (id)allData;
- (void)dealloc;
- (void)appendNetworkData:(id)a0;
- (BOOL)hasUnreadData;
- (void)markOffset;
- (id)readData:(unsigned int)a0;
- (BOOL)readUnsignedInt:(unsigned int *)a0;
- (BOOL)readUnsignedShort:(unsigned short *)a0;
- (void)seekToMarkedOffset;

@end
