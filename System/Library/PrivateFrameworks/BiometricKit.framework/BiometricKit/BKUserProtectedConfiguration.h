@class NSNumber;

@interface BKUserProtectedConfiguration : NSObject

@property (retain, nonatomic) NSNumber *unlockEnabled;
@property (retain, nonatomic) NSNumber *identificationEnabled;
@property (retain, nonatomic) NSNumber *loginEnabled;
@property (retain, nonatomic) NSNumber *applePayEnabled;
@property (retain, nonatomic) NSNumber *attentionDetectionEnabled;
@property (retain, nonatomic) NSNumber *periocularFaceIDMatchEnabled;

- (void).cxx_destruct;
- (id)description;
- (id)dictionary;
- (id)initWithDictionary:(id)a0 effective:(BOOL)a1;

@end
