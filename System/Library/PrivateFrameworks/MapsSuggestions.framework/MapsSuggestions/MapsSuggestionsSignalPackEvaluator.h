@class MapsSuggestionsSignalPack;

@interface MapsSuggestionsSignalPackEvaluator : NSObject {
    MapsSuggestionsSignalPack *_signalPack;
}

+ (id)evaluatorFromSignalPack:(id)a0;

- (BOOL)isTouristHere;
- (BOOL)isLowChanceOfRaining;
- (BOOL)isLowChanceOfSnowing;
- (BOOL)hasCarPlayInfo;
- (id)initWithSignalPack:(id)a0;
- (BOOL)hasSignalForPaymentCard;
- (BOOL)userHasAPaymentCard;
- (BOOL)hasTouristInfo;
- (BOOL)isBadWeather;
- (BOOL)userHasAnExpressPaymentCard;
- (double)isTransitUserConfidence;
- (BOOL)hasWeatherInfo;
- (BOOL)isHighChanceOfSnowing;
- (BOOL)hasSignalForHasATransitCard;
- (BOOL)isMildWeather;
- (BOOL)isTransitCurrentlyPossible;
- (BOOL)hasMapTypeInfo;
- (void).cxx_destruct;
- (BOOL)isUserPreferenceDriving;
- (BOOL)hasTransitInfo;
- (BOOL)isHighChanceOfRaining;
- (BOOL)isColdWeather;
- (BOOL)hasUserTransportTypePreferenceInfo;
- (BOOL)hasDistanceFromOriginToDestinationInfo;
- (BOOL)isRideSharingAppsInstalled;
- (BOOL)isCarPlayConnected;
- (BOOL)isWalkable;
- (BOOL)hasDistanceFromHereToDestinationInfo;
- (BOOL)isHotWeather;
- (BOOL)isEasilyWalkable;
- (BOOL)userHasATransitCard;
- (BOOL)isUserPreferenceTransit;
- (BOOL)hasDistanceFromHereToOriginInfo;
- (BOOL)isUserPreferenceWalking;
- (BOOL)hasRidesharingInfo;
- (BOOL)hasSignalForExpressPaymentCard;
- (BOOL)hasWeatherPrecipitationInfo;
- (BOOL)isMapTypeTransit;
- (double)isTransitUserHereConfidence;
- (BOOL)isUserPreferenceRidesharing;
- (BOOL)hasWeatherTemperatureInfo;

@end
