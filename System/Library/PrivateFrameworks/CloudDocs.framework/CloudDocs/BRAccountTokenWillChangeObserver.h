@class NSString;

@interface BRAccountTokenWillChangeObserver : NSObject

@property (readonly, nonatomic) NSString *personaID;

- (void)_accountWillChange;
- (void).cxx_destruct;
- (id)initWithPersonaID:(id)a0;

@end
