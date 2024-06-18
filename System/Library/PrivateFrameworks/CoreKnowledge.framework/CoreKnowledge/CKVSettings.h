@class NSDictionary, CKVLocalization, CKVSearchContext;

@interface CKVSettings : NSObject <NSSecureCoding> {
    _Atomic unsigned char _enablementOptions;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSDictionary *simulatedPriors;
@property (readonly, nonatomic) CKVSearchContext *searchContext;
@property (readonly) CKVLocalization *localization;

+ (id)defaultSettings;
+ (BOOL)_isDonationEnabled:(unsigned char)a0;
+ (BOOL)_isSandboxEnabled:(unsigned char)a0;
+ (BOOL)_isSpeechProfileEnabled:(unsigned char)a0;
+ (unsigned char)defaultEnablementOptions;
+ (id)defaultSandboxSettings;
+ (BOOL)isDonationEnabled:(unsigned char)a0;
+ (BOOL)isSkitEnabled:(unsigned char)a0;
+ (id)sandboxSettingsWithLocale:(id)a0 error:(id *)a1;

- (id)initWithCoder:(id)a0;
- (id)init;
- (BOOL)isEvaluationEnabled;
- (void)setEvaluationEnabled:(BOOL)a0;
- (BOOL)isTaskEnabled:(unsigned short)a0 isAdmin:(BOOL)a1;
- (BOOL)isXPCDonationEnabled:(long long)a0;
- (BOOL)isSkitEnabled;
- (BOOL)isSpeechProfileEnabledForDictation;
- (BOOL)shouldOverrideSpeechProfileDeferral;
- (void)refreshEnablementOptions;
- (BOOL)isSandboxEnabled;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)refreshLocalization;
- (BOOL)isSpeechProfileEnabled;
- (unsigned char)enablementOptions;
- (BOOL)isSpeechProfileEnabledForAssistant;
- (id)initWithLocalization:(id)a0 enablementOptions:(unsigned char)a1;

@end
