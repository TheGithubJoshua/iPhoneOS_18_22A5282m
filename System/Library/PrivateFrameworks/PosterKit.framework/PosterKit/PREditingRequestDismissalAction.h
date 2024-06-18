@interface PREditingRequestDismissalAction : BSAction

@property (readonly, nonatomic) BOOL userAcceptedChanges;

- (id)valueDescriptionForFlag:(long long)a0 object:(id)a1 ofSetting:(unsigned long long)a2;
- (id)keyDescriptionForSetting:(unsigned long long)a0;
- (id)initWithUserAcceptedChanges:(BOOL)a0 completion:(id /* block */)a1;

@end
