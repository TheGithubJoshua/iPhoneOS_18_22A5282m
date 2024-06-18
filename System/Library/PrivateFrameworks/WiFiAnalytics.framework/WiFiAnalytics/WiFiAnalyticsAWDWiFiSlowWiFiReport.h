@class WiFiAnalyticsAWDSlowWiFiNotification, NSMutableArray;

@interface WiFiAnalyticsAWDWiFiSlowWiFiReport : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) BOOL hasSlowNotice;
@property (retain, nonatomic) WiFiAnalyticsAWDSlowWiFiNotification *slowNotice;
@property (retain, nonatomic) NSMutableArray *linkQualSamples;
@property (retain, nonatomic) NSMutableArray *usbEvents;

+ (Class)linkQualSampleType;
+ (Class)usbEventType;

- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addLinkQualSample:(id)a0;
- (void)addUsbEvent:(id)a0;
- (void)clearLinkQualSamples;
- (void)clearUsbEvents;
- (id)linkQualSampleAtIndex:(unsigned long long)a0;
- (unsigned long long)linkQualSamplesCount;
- (id)usbEventAtIndex:(unsigned long long)a0;
- (unsigned long long)usbEventsCount;

@end
