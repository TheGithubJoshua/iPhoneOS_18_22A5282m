@class NSString, NSLocale, _LTLocalePair, _LTLanguageDetectionResult;

@interface _LTSpeechLIDLoggingRequest : NSObject <_LTLoggingRequest>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *conversationID;
@property (copy, nonatomic) NSString *requestID;
@property (copy, nonatomic) _LTLocalePair *localePair;
@property (copy, nonatomic) NSLocale *targetLocale;
@property (copy, nonatomic) NSLocale *selectedLocale;
@property (retain, nonatomic) _LTLanguageDetectionResult *lidResult;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
