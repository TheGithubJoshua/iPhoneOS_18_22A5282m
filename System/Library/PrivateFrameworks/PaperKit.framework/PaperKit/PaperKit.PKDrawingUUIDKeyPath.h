@class NSString, NSData;

@interface PaperKit.PKDrawingUUIDKeyPath : NSObject <PKDrawingUUID> {
    void /* unknown type, empty encoding */ keypath;
}

@property (nonatomic, readonly) NSString *uniqueCacheFilePath;
@property (nonatomic, readonly) NSData *AES128Key;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
