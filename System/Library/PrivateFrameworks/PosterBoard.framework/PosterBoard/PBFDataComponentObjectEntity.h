@class NSString, PBFDataRefreshContext;

@interface PBFDataComponentObjectEntity : NSObject

@property (readonly, nonatomic) id object;
@property (readonly, nonatomic) NSString *component;
@property (readonly, nonatomic) PBFDataRefreshContext *context;

- (void).cxx_destruct;
- (id)description;
- (id)determineRefreshState;
- (id)initWithComponent:(id)a0 object:(id)a1 context:(id)a2;

@end
