@class NSString;

@interface CSInstantAnswerAction : NSObject <NSCopying>

@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *url;

+ (id)actionWithType:(id)a0 andUrl:(id)a1;

- (id)initWithAttributes:(id)a0;
- (id)attributes;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithType:(id)a0 andUrl:(id)a1;

@end
