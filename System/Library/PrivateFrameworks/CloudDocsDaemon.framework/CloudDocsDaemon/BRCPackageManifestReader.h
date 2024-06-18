@class NSError, PBMessageStreamReader, NSInputStream;

@interface BRCPackageManifestReader : NSEnumerator {
    NSInputStream *_stream;
    PBMessageStreamReader *_reader;
    NSError *_error;
}

@property (nonatomic) Class itemClass;

- (id)nextObject;
- (id)init;
- (id)initWithURL:(id)a0;
- (void)done;
- (void).cxx_destruct;
- (id)error;
- (void)dealloc;
- (id)initWithAsset:(id)a0;
- (id)initWithInputStream:(id)a0;
- (id)initWithDeviceID:(int)a0 fileID:(unsigned long long)a1;

@end
