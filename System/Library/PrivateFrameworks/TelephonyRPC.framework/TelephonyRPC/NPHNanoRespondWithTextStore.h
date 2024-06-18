@class NSUserDefaults;

@interface NPHNanoRespondWithTextStore : NSObject {
    NSUserDefaults *_userDefaults;
}

- (id)init;
- (void).cxx_destruct;
- (unsigned long long)count;
- (id)customReplies;
- (id)cannedRepliesForLanguage:(id)a0;
- (id)defaultRepliesForLanguage:(id)a0;

@end
