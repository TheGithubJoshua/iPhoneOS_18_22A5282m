@class AACXPCClient;

@interface AACAwardsClient : NSObject

@property (retain, nonatomic) AACXPCClient *client;

- (id)init;
- (void)removeTemplatesWithUniqueNames:(id)a0 completion:(id /* block */)a1;
- (void)removeEarnedInstances:(id)a0 completion:(id /* block */)a1;
- (void)requestAwardingWithTriggers:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)scheduleAwardingWithCompletion:(id /* block */)a0;
- (id)ephemeralAchievementWithTemplateUniqueName:(id)a0 error:(id *)a1;
- (void)addTemplates:(id)a0 completion:(id /* block */)a1;
- (void)removeTemplates:(id)a0 completion:(id /* block */)a1;
- (void)templatesForSource:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)addEarnedInstances:(id)a0 completion:(id /* block */)a1;
- (id)allAchievementsWithError:(id *)a0;
- (void)allAchievementsWithCompletion:(id /* block */)a0;
- (void)removeTemplatesForSource:(id)a0 completion:(id /* block */)a1;

@end
