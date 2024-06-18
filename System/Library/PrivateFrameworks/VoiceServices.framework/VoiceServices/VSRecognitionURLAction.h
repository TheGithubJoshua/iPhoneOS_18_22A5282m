@class NSURL;

@interface VSRecognitionURLAction : VSRecognitionAction {
    NSURL *_url;
}

- (id)URL;
- (void)setURL:(id)a0;
- (void)dealloc;
- (id)perform;
- (int)completionType;

@end
