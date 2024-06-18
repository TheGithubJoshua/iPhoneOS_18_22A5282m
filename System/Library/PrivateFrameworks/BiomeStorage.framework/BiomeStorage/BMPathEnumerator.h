@class NSString;

@interface BMPathEnumerator : NSObject {
    NSString *_path;
    struct _NSRange { unsigned long long location; unsigned long long length; } _range;
}

- (id)peekPath;
- (id)initWithPath:(id)a0;
- (void).cxx_destruct;
- (id)navigateDown;
- (id)navigateUp;

@end
