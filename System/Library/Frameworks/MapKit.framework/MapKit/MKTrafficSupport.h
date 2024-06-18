@interface MKTrafficSupport : NSObject

+ (id)sharedTrafficSupport;

- (long long)_convertType:(int)a0;
- (id)localizedReportedByYouForGEOIncidentType:(int)a0;
- (id)localizedTitleForIncidentType:(long long)a0 laneType:(long long)a1 laneCount:(unsigned long long)a2;
- (id)localizedReportConfirmationForIncidentType:(int)a0;
- (id)localizedRAPDescriptionForGEOIncidentType:(int)a0;
- (void)setupTrafficIncidents;
- (id)localizedTitleForGEOIncidentType:(int)a0 laneType:(int)a1 laneCount:(unsigned long long)a2;
- (id)localizedSubtitleForStreet:(id)a0 crossStreet:(id)a1;

@end