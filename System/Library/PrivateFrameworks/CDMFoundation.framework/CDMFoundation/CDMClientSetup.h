@class NSString, NSArray, NSLocale;

@interface CDMClientSetup : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSLocale *localeIdentifier;
@property (readonly) NSString *sandboxId;
@property (readonly) NSString *activeServiceGraph;
@property (readonly) NSString *assetDirPath;
@property (readonly) NSString *requesterId;
@property (readonly) NSArray *overrideSiriVocabSpans;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithLocaleIdentifier:(id)a0 sandboxId:(id)a1 activeServiceGraph:(id)a2;
- (id)initWithLocaleIdentifier:(id)a0 sandboxId:(id)a1;
- (id)initWithLocaleIdentifier:(id)a0 sandboxId:(id)a1 activeServiceGraph:(id)a2 assetDirPath:(id)a3 overrideSiriVocabSpans:(id)a4;

@end
