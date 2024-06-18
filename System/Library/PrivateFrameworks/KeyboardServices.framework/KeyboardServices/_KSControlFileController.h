@class NSURL;

@interface _KSControlFileController : NSObject {
    NSURL *_url;
}

- (id)contents;
- (id)initWithName:(id)a0 inDirectory:(id)a1;
- (BOOL)checkIfExists;
- (void).cxx_destruct;
- (id)description;
- (void)reset;
- (void)setContents:(id)a0;

@end
