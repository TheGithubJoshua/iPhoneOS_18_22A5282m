@class NSString, NSArray, NSData, NSDictionary, NSMorphologyCustomPronoun;

@interface _NSAttributedStringGrammarInflection : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly, nonatomic) _NSAttributedStringGrammarInflection *userInflection;
@property (class, setter=_setThirdPartyApplicationsCanAccessUserInflection:) BOOL _thirdPartyApplicationsCanAccessUserInflection;
@property (class, readonly, nonatomic) _NSAttributedStringGrammarInflection *_currentGlobalUserInflection;
@property (class, readonly, nonatomic) _NSAttributedStringGrammarInflection *_currentGlobalUserInflectionIfAvailable;
@property (class, readonly) NSString *_protectedPreferencesDomain;
@property (class, readonly) NSString *_thirdPartyPreferencesDomain;
@property (class, readonly) BOOL _isSimulatingLockedDevice;
@property (class, readonly) BOOL _isSimulatingThirdPartyProcess;
@property (class, readonly) NSArray *presetInflections;
@property (class, readonly) BOOL canSelectCustomInflection;
@property (class, readonly) BOOL canSelectUserInflection;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSData *externalRepresentation;
@property (readonly) NSDictionary *externalRepresentationDictionary;
@property (readonly) NSString *localizedShortDescription;
@property long long context;
@property long long gender;
@property long long grammaticalCase;
@property long long number;
@property long long person;
@property (readonly, nonatomic, getter=isIdentity) BOOL identity;
@property (copy, nonatomic) NSMorphologyCustomPronoun *englishCustomPronoun;

+ (BOOL)_canSelectUserInflectionWithPreferredLanguages:(id)a0;
+ (void)_removeGlobalUserInflectionObserver:(id)a0 context:(void *)a1;
+ (void)_addGlobalUserInflectionObserver:(id)a0 options:(unsigned long long)a1 context:(void *)a2;
+ (void)_usePreferencesDomainForFirstParty:(id)a0 thirdParty:(id)a1 simulateLockedDevice:(BOOL)a2 simulateThirdPartyProcess:(BOOL)a3 withinBlock:(id /* block */)a4;

- (id)initWithCoder:(id)a0;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (void)_beginUsingInsteadOfUserInflection;
- (void)_editByAddingWordAttributes:(struct { long long x0; long long x1; long long x2; long long x3; unsigned long long x4; long long x5; long long x6; long long x7; long long x8; long long x9; long long x10; long long x11; long long x12; long long x13; long long x14; long long x15; long long x16; long long x17; long long x18; BOOL x19; BOOL x20; BOOL x21; })a0 overrideIfAlreadySet:(BOOL)a1;
- (void)_editByApplyingPluralityRulesForNumbers:(id)a0 inLanguages:(id)a1;
- (void)_endUsingInsteadOfUserInflection;
- (id)_initWithGender:(long long)a0;
- (id)_initWithMarkdownDictionary:(id)a0;
- (id)_markupDictionary;
- (void)_setAsGlobalUserInflection;
- (void)_useInsteadOfUserInflectionInBlock:(id /* block */)a0;
- (id)initWithExternalRepresentation:(id)a0 error:(id *)a1;
- (id)initWithExternalRepresentationDictionary:(id)a0 error:(id *)a1;
- (id)initWithInflectionRule:(id)a0;
- (id)initWithMorphology:(id)a0;

@end
