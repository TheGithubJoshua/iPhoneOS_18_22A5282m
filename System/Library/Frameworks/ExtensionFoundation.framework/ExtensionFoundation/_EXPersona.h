@class NSString;

@interface _EXPersona : NSObject

@property (readonly, nonatomic) NSString *personaUniqueString;

+ (id)personaWithPersonaUniqueString:(id)a0;
+ (id)defaultPersona;
+ (id)currentPersona;

- (id)initWithPersonaUniqueString:(id)a0;
- (void).cxx_destruct;

@end
