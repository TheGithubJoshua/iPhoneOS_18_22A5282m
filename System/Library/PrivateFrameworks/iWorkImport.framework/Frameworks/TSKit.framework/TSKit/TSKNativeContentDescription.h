@class NSString, NSArray;

@interface TSKNativeContentDescription : TSPObject {
    NSString *_appName;
    NSString *_appVersion;
    NSString *_documentId;
    NSArray *_drawableDescriptions;
}

@property (copy, nonatomic) NSString *appName;
@property (copy, nonatomic) NSString *appVersion;
@property (copy, nonatomic) NSString *documentId;
@property (copy, nonatomic) NSArray *drawableDescriptions;

- (void).cxx_destruct;
- (id)description;
- (void)saveToArchiver:(id)a0;
- (void)loadFromArchive:(const void *)a0 unarchiver:(id)a1;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;

@end