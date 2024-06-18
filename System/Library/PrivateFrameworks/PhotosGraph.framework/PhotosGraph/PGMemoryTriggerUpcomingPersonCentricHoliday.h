@class PGGraphMemoryNodeCollection;

@interface PGMemoryTriggerUpcomingPersonCentricHoliday : PGHolidayMemoryTrigger {
    PGGraphMemoryNodeCollection *_allSingleMomentMemoryNodes;
    PGGraphMemoryNodeCollection *_singleMomentMemoryNodesWithPartner;
    PGGraphMemoryNodeCollection *_singleMomentMemoryNodesWithMother;
    PGGraphMemoryNodeCollection *_singleMomentMemoryNodesWithFather;
}

- (void).cxx_destruct;
- (unsigned long long)triggerType;
- (id)allSingleMomentMemoryNodesInGraph:(id)a0;
- (id)relevantFeatureNodesInFeatureNodes:(id)a0;
- (id)resultsTriggeredWithContext:(id)a0 inGraph:(id)a1 progressReporter:(id)a2;
- (id)singleMomentMemoryNodesWithRelevantPersonNodes:(id)a0 inGraph:(id)a1;

@end