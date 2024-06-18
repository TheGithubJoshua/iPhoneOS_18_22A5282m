@interface WiFiAnalyticsAWDWASymptomsDnsStats : PBCodable <NSCopying> {
    struct { unsigned char symptomsDnsTimeSincePreviousTriggerMinutes : 1; unsigned char configType : 1; unsigned char impactedServersAtStudyEnd : 1; unsigned char impactedServersAtStudyStart : 1; unsigned char lanHealthAfterDecision : 1; unsigned char lanHealthBeforeDecision : 1; unsigned char netscoreAtStudyEnd : 1; unsigned char netscoreAtStudyStart : 1; unsigned char netscoreHealthAfterDecision : 1; unsigned char netscoreHealthBeforeDecision : 1; unsigned char numIpv4DnsServers : 1; unsigned char numIpv6DnsServers : 1; unsigned char numLocalDnsServers : 1; unsigned char numRemoteDnsServers : 1; unsigned char stallscoreAtStudyEnd : 1; unsigned char stallscoreAtStudyStart : 1; unsigned char stallscoreHealthAfterDecision : 1; unsigned char stallscoreHealthBeforeDecision : 1; unsigned char suppressedReason : 1; unsigned char symptomsDnsRecommendation : 1; unsigned char totalDnsServers : 1; unsigned char wanHealthAfterDecision : 1; unsigned char wanHealthBeforeDecision : 1; unsigned char dpsNotificationReceivedDuringStudy : 1; unsigned char isCaptiveServerIPResolved : 1; unsigned char isPingEnqueueFailing : 1; unsigned char slowWiFiNotificationReceivedDuringStudy : 1; unsigned char symptomsDnsscreenStateOn : 1; } _has;
}

@property (nonatomic) BOOL hasTotalDnsServers;
@property (nonatomic) unsigned int totalDnsServers;
@property (nonatomic) BOOL hasNumIpv4DnsServers;
@property (nonatomic) unsigned int numIpv4DnsServers;
@property (nonatomic) BOOL hasNumIpv6DnsServers;
@property (nonatomic) unsigned int numIpv6DnsServers;
@property (nonatomic) BOOL hasNumLocalDnsServers;
@property (nonatomic) unsigned int numLocalDnsServers;
@property (nonatomic) BOOL hasNumRemoteDnsServers;
@property (nonatomic) unsigned int numRemoteDnsServers;
@property (nonatomic) BOOL hasConfigType;
@property (nonatomic) int configType;
@property (nonatomic) BOOL hasNetscoreAtStudyStart;
@property (nonatomic) unsigned int netscoreAtStudyStart;
@property (nonatomic) BOOL hasStallscoreAtStudyStart;
@property (nonatomic) unsigned int stallscoreAtStudyStart;
@property (nonatomic) BOOL hasImpactedServersAtStudyStart;
@property (nonatomic) unsigned int impactedServersAtStudyStart;
@property (nonatomic) BOOL hasNetscoreHealthBeforeDecision;
@property (nonatomic) unsigned int netscoreHealthBeforeDecision;
@property (nonatomic) BOOL hasStallscoreHealthBeforeDecision;
@property (nonatomic) unsigned int stallscoreHealthBeforeDecision;
@property (nonatomic) BOOL hasLanHealthBeforeDecision;
@property (nonatomic) unsigned int lanHealthBeforeDecision;
@property (nonatomic) BOOL hasWanHealthBeforeDecision;
@property (nonatomic) unsigned int wanHealthBeforeDecision;
@property (nonatomic) BOOL hasIsCaptiveServerIPResolved;
@property (nonatomic) BOOL isCaptiveServerIPResolved;
@property (nonatomic) BOOL hasSymptomsDnsscreenStateOn;
@property (nonatomic) BOOL symptomsDnsscreenStateOn;
@property (nonatomic) BOOL hasSymptomsDnsRecommendation;
@property (nonatomic) int symptomsDnsRecommendation;
@property (nonatomic) BOOL hasSuppressedReason;
@property (nonatomic) int suppressedReason;
@property (nonatomic) BOOL hasNetscoreAtStudyEnd;
@property (nonatomic) unsigned int netscoreAtStudyEnd;
@property (nonatomic) BOOL hasStallscoreAtStudyEnd;
@property (nonatomic) unsigned int stallscoreAtStudyEnd;
@property (nonatomic) BOOL hasImpactedServersAtStudyEnd;
@property (nonatomic) unsigned int impactedServersAtStudyEnd;
@property (nonatomic) BOOL hasNetscoreHealthAfterDecision;
@property (nonatomic) unsigned int netscoreHealthAfterDecision;
@property (nonatomic) BOOL hasStallscoreHealthAfterDecision;
@property (nonatomic) unsigned int stallscoreHealthAfterDecision;
@property (nonatomic) BOOL hasLanHealthAfterDecision;
@property (nonatomic) unsigned int lanHealthAfterDecision;
@property (nonatomic) BOOL hasWanHealthAfterDecision;
@property (nonatomic) unsigned int wanHealthAfterDecision;
@property (nonatomic) BOOL hasSymptomsDnsTimeSincePreviousTriggerMinutes;
@property (nonatomic) unsigned long long symptomsDnsTimeSincePreviousTriggerMinutes;
@property (nonatomic) BOOL hasDpsNotificationReceivedDuringStudy;
@property (nonatomic) BOOL dpsNotificationReceivedDuringStudy;
@property (nonatomic) BOOL hasSlowWiFiNotificationReceivedDuringStudy;
@property (nonatomic) BOOL slowWiFiNotificationReceivedDuringStudy;
@property (nonatomic) BOOL hasIsPingEnqueueFailing;
@property (nonatomic) BOOL isPingEnqueueFailing;

- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)StringAsConfigType:(id)a0;
- (int)StringAsSuppressedReason:(id)a0;
- (int)StringAsSymptomsDnsRecommendation:(id)a0;
- (id)configTypeAsString:(int)a0;
- (id)suppressedReasonAsString:(int)a0;
- (id)symptomsDnsRecommendationAsString:(int)a0;

@end