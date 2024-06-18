@class NSString;

@interface _UIWebFileUploadItem : NSObject

@property (retain, nonatomic) NSString *filePath;

- (id)initWithFilePath:(id)a0;
- (BOOL)isVideo;
- (void)dealloc;
- (id)displayImage;

@end
