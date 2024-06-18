@class NSString, NSData;

@interface FTABSubfileOS : NSObject {
    NSData *_data;
}

@property (readonly) NSString *tag;
@property (readonly) const char *dataPointer;
@property (readonly) unsigned int dataLength;

- (void).cxx_destruct;
- (id)description;
- (id)initWithTag:(id)a0 data:(id)a1;
- (id)generateHashSHA256;
- (id)generateHashSHA384;
- (id)generateHashSHA512;
- (id)initWithTag:(id)a0 dataPointer:(const void *)a1 dataLength:(unsigned int)a2;

@end