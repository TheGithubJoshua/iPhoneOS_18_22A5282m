@class NSURL;

@interface MFAttachmentDataProvider : NSObject

@property (retain) NSURL *url;

+ (id)dataProviderWithPath:(id)a0;
+ (id)dataProviderWithURL:(id)a0;

- (BOOL)exists;
- (BOOL)save:(id)a0;
- (id)data;
- (id)initWithURL:(id)a0;
- (id)_path;
- (void)dealloc;
- (id)_fileAttributes:(id)a0;
- (BOOL)_isFileURL;
- (id)errorWithMessage:(id)a0 code:(long long)a1;

@end
