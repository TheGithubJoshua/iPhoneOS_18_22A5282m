@class NSDictionary, NSString;

@interface ASTAction : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL generatedId;
@property (readonly, nonatomic) NSDictionary *dictionaryValue;
@property (readonly, nonatomic) NSString *action;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSDictionary *parameters;
@property (nonatomic) unsigned long long progress;
@property (nonatomic) long long resultCode;
@property (retain, nonatomic) NSDictionary *results;
@property (nonatomic, getter=isFinished) BOOL finished;

- (id)initWithCoder:(id)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)acceptableDecoderClasses;
- (id)initWithAction:(id)a0 data:(id)a1;

@end
