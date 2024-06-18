@class KVDictionaryLog;

@interface CKVSpeechProfileLog : NSObject {
    KVDictionaryLog *_log;
}

@property (readonly, nonatomic) long long locale;

+ (id)allLogsInProfileDirectory:(id)a0;

- (BOOL)remove;
- (void)registerUpdateForSpeechCategories:(id)a0 version:(id)a1;
- (id)init;
- (id)lastRegisteredVersionForSpeechCategory:(id)a0;
- (id)initWithProfileDirectory:(id)a0 locale:(long long)a1;
- (void).cxx_destruct;
- (id)description;
- (id)lastCompletedVersionForSpeechCategory:(id)a0;
- (id)_updateVersion:(id)a0 forKeys:(id)a1 logKey:(id)a2;
- (id)lastCompletedVersionForOriginAppId:(id)a0;
- (void)recordUpdateCompletedForSpeechCategories:(id)a0 originAppIds:(id)a1 version:(id)a2;

@end
