@class NSDictionary;

@interface ATXAnchorModelHyperParameters : NSObject {
    NSDictionary *_parameters;
}

+ (id)sharedInstance;

- (double)percentileForEndOffsetFromAnchorForPhase3;
- (double)percentileForStartOffsetFromAnchorForPhase3;
- (long long)minNumUniqueAnchorOccurrencesWithUniqueCandidateOccurrencesForHighConfidencePredictionForAnchor:(id)a0;
- (id)init;
- (double)secondsBeforeHistoricalStartDateToPredictCandidate;
- (id)enabledAnchors;
- (double)idleTimeEndAnchorMinimumSecondsForBeingIdle;
- (double)minClassConditionalProbabilityForCandidateForPhase1;
- (double)minPosteriorProbabilityForCandidateForPhase1;
- (double)mediumBlendingConfidenceScoreThreshold;
- (double)maxValueForParameterKey:(id)a0;
- (void).cxx_destruct;
- (double)maxSecondsSinceCandidateOccurrenceToConsiderCandidateForPrediction;
- (long long)minUniqueAnchorOccurrencesForAnchorForPhase1;
- (id)abGroup;
- (double)minValueForParameterKey:(id)a0;
- (double)maxTrainingAgeInSecondsToConsiderForRetraining;
- (long long)minNumUniqueAnchorOccurrencesWithUniqueCandidateOccurrencesForMediumConfidencePredictionForAnchor:(id)a0;
- (double)ratioForLeafNodeDecision;
- (double)minPosteriorProbabilityForMediumConfidencePredictionForAnchor:(id)a0;
- (double)maxDurationForAnchorModelPredictionInSecondsForPhase3;
- (double)minPosteriorProbabilityForHighConfidencePredictionForAnchor:(id)a0;
- (double)minClassConditionalProbabilityForHighConfidencePredictionForAnchor:(id)a0;
- (long long)candidateClassifierTypeForPhase2;
- (id)knownAnchorClasses;
- (id)anchorsDisabledForHomescreen;
- (double)minPosteriorProbabilityToIgnoreClassConditionalProbabilityForCandidateForPhase1;
- (double)minDurationForAnchorModelPredictionInSecondsForPhase3;
- (double)minClassConditionalProbabilityForMediumConfidencePredictionForAnchor:(id)a0;
- (double)modelWeightForParameterKey:(id)a0;
- (double)highBlendingConfidenceScoreThreshold;

@end
