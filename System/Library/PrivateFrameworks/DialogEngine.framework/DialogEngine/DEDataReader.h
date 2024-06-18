@class NSData;

@interface DEDataReader : NSObject <DEReader>

@property (retain, nonatomic) NSData *data;
@property (nonatomic) unsigned long long dataOffset;

- (id)readDataOfLength:(unsigned long long)a0;
- (id)init;
- (id)readData;
- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (void)close;

@end
