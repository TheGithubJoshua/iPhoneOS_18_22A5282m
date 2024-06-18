@class NSString;

@interface PPMeCardCache : NSObject {
    NSString *_path;
}

- (id)init;
- (void).cxx_destruct;
- (BOOL)deleteMeCardCache;
- (BOOL)writeMeCardCache:(id)a0;
- (id)loadMeCardCache;

@end
