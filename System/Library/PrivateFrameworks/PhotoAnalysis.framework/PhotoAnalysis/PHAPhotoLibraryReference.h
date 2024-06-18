@class NSString;

@interface PHAPhotoLibraryReference : NSObject

@property (readonly, copy) NSString *path;

- (id)initWithLibraryURL:(id)a0;
- (id)init;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (BOOL)isEqualToPhotoLibraryReference:(id)a0;

@end
