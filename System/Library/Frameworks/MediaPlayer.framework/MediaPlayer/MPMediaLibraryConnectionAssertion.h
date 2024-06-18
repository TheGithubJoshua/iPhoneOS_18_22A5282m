@class NSString, MPMediaLibrary;

@interface MPMediaLibraryConnectionAssertion : NSObject {
    MPMediaLibrary *_library;
}

@property (readonly, nonatomic) NSString *identifier;

- (void).cxx_destruct;
- (id)description;
- (id)_initWithMediaLibrary:(id)a0 identifier:(id)a1;
- (void)dealloc;

@end
