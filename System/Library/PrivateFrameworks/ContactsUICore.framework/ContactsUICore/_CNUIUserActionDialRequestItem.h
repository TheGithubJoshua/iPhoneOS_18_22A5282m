@protocol CNTUDialRequest;

@interface _CNUIUserActionDialRequestItem : CNUIUserActionItem

@property (readonly, nonatomic) id<CNTUDialRequest> dialRequest;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)performActionWithContext:(id)a0;
- (id)initWithType:(id)a0 contactProperty:(id)a1 bundleIdentifier:(id)a2 dialRequest:(id)a3 group:(long long)a4 options:(unsigned long long)a5;

@end
