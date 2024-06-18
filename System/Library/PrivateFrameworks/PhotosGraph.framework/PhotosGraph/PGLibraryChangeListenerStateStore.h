@class PHPersistentChangeToken, NSURL;

@interface PGLibraryChangeListenerStateStore : NSObject {
    NSURL *_changeTokenURL;
}

@property (readonly, nonatomic) PHPersistentChangeToken *changeToken;

- (id)changeToken;
- (id)initWithPhotoLibrary:(id)a0;
- (void)setChangeToken:(id)a0;
- (void).cxx_destruct;

@end
