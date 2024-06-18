@interface ATXHeuristicActionProducer : NSObject {
    id _expireNotificationHandle;
}

+ (id)sharedInstance;
+ (unsigned long long)actionExperienceForScoredHeuristicAction:(id)a0;
+ (double)generateScoreForHeuristic:(id)a0;

- (id)init;
- (id)produceActions;
- (id)_criteriaForJobOnDate:(id)a0;
- (void)setUpdateJobForCriteria:(id)a0;
- (BOOL)userAlreadyEngagedWithAction:(id)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (id)bundleIdForAction:(id)a0;
- (id)firstUpdateDateForActions:(id)a0;
- (id)digitalHealthBlacklist;
- (BOOL)isActionBlacklisted:(id)a0;
- (void)invalidateOnGlobalQueueWithDelay:(double)a0;
- (id)actionPredictionBlacklist;
- (void)dealloc;
- (void)scheduleNextHeuristicRefreshGivenActions:(id)a0;
- (void)coalescedProduceActions;

@end
