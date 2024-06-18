@class NSData;

@interface AWDWiFiMetric11axLinkChangeData : PBCodable <NSCopying> {
    struct { int *list; unsigned long long count; unsigned long long size; } _bcnFrmsHistorys;
    struct { int *list; unsigned long long count; unsigned long long size; } _bcnPerHistorys;
    struct { int *list; unsigned long long count; unsigned long long size; } _fwTxFrmsHistorys;
    struct { int *list; unsigned long long count; unsigned long long size; } _fwTxPerHistorys;
    struct { int *list; unsigned long long count; unsigned long long size; } _rssiHistorys;
    struct { int *list; unsigned long long count; unsigned long long size; } _txFrmsHistorys;
    struct { int *list; unsigned long long count; unsigned long long size; } _txPerHistorys;
    struct { unsigned char timestamp : 1; unsigned char akmSuites : 1; unsigned char capabilities : 1; unsigned char channel : 1; unsigned char channelWidth : 1; unsigned char enhancedSecurityType : 1; unsigned char flags : 1; unsigned char gatewayARPHistory : 1; unsigned char heBEParamRecord : 1; unsigned char heBKParamRecord : 1; unsigned char heBssMcsNss : 1; unsigned char heMacCapSubfields : 1; unsigned char heOpsParams : 1; unsigned char hePhyCapSubfields : 1; unsigned char heRxTxMcsMap : 1; unsigned char heStaCnt : 1; unsigned char heUtilization : 1; unsigned char heVIParamRecord : 1; unsigned char heVOParamRecord : 1; unsigned char htASel : 1; unsigned char htAmpduParams : 1; unsigned char htExtended : 1; unsigned char htInfo : 1; unsigned char htTxBf : 1; unsigned char mcastCipher : 1; unsigned char phyMode : 1; unsigned char reason : 1; unsigned char securityType : 1; unsigned char subreason : 1; unsigned char ucastCipher : 1; unsigned char vhtInfo : 1; unsigned char wpaProtocol : 1; unsigned char isInVol : 1; unsigned char isLinkUp : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) unsigned long long rssiHistorysCount;
@property (readonly, nonatomic) int *rssiHistorys;
@property (nonatomic) BOOL hasIsLinkUp;
@property (nonatomic) BOOL isLinkUp;
@property (nonatomic) BOOL hasIsInVol;
@property (nonatomic) BOOL isInVol;
@property (nonatomic) BOOL hasReason;
@property (nonatomic) unsigned int reason;
@property (nonatomic) BOOL hasSubreason;
@property (nonatomic) unsigned int subreason;
@property (nonatomic) BOOL hasChannel;
@property (nonatomic) unsigned int channel;
@property (nonatomic) BOOL hasChannelWidth;
@property (nonatomic) unsigned int channelWidth;
@property (nonatomic) BOOL hasPhyMode;
@property (nonatomic) unsigned int phyMode;
@property (nonatomic) BOOL hasFlags;
@property (nonatomic) unsigned int flags;
@property (readonly, nonatomic) BOOL hasOui;
@property (retain, nonatomic) NSData *oui;
@property (nonatomic) BOOL hasSecurityType;
@property (nonatomic) unsigned int securityType;
@property (nonatomic) BOOL hasWpaProtocol;
@property (nonatomic) unsigned int wpaProtocol;
@property (nonatomic) BOOL hasMcastCipher;
@property (nonatomic) unsigned int mcastCipher;
@property (nonatomic) BOOL hasUcastCipher;
@property (nonatomic) unsigned int ucastCipher;
@property (nonatomic) BOOL hasAkmSuites;
@property (nonatomic) unsigned int akmSuites;
@property (nonatomic) BOOL hasCapabilities;
@property (nonatomic) unsigned int capabilities;
@property (nonatomic) BOOL hasEnhancedSecurityType;
@property (nonatomic) unsigned int enhancedSecurityType;
@property (nonatomic) BOOL hasHtInfo;
@property (nonatomic) unsigned int htInfo;
@property (nonatomic) BOOL hasHtExtended;
@property (nonatomic) unsigned int htExtended;
@property (nonatomic) BOOL hasHtTxBf;
@property (nonatomic) unsigned int htTxBf;
@property (nonatomic) BOOL hasHtASel;
@property (nonatomic) unsigned int htASel;
@property (nonatomic) BOOL hasHtAmpduParams;
@property (nonatomic) unsigned int htAmpduParams;
@property (readonly, nonatomic) BOOL hasHtSupportedMcsSet;
@property (retain, nonatomic) NSData *htSupportedMcsSet;
@property (nonatomic) BOOL hasVhtInfo;
@property (nonatomic) unsigned int vhtInfo;
@property (readonly, nonatomic) BOOL hasVhtSupportedMcsSet;
@property (retain, nonatomic) NSData *vhtSupportedMcsSet;
@property (readonly, nonatomic) unsigned long long txPerHistorysCount;
@property (readonly, nonatomic) int *txPerHistorys;
@property (readonly, nonatomic) unsigned long long txFrmsHistorysCount;
@property (readonly, nonatomic) int *txFrmsHistorys;
@property (readonly, nonatomic) unsigned long long fwTxPerHistorysCount;
@property (readonly, nonatomic) int *fwTxPerHistorys;
@property (readonly, nonatomic) unsigned long long fwTxFrmsHistorysCount;
@property (readonly, nonatomic) int *fwTxFrmsHistorys;
@property (readonly, nonatomic) unsigned long long bcnPerHistorysCount;
@property (readonly, nonatomic) int *bcnPerHistorys;
@property (readonly, nonatomic) unsigned long long bcnFrmsHistorysCount;
@property (readonly, nonatomic) int *bcnFrmsHistorys;
@property (nonatomic) BOOL hasGatewayARPHistory;
@property (nonatomic) unsigned int gatewayARPHistory;
@property (readonly, nonatomic) BOOL hasHeCapabilitiesIE;
@property (retain, nonatomic) NSData *heCapabilitiesIE;
@property (readonly, nonatomic) BOOL hasHeOperationIE;
@property (retain, nonatomic) NSData *heOperationIE;
@property (readonly, nonatomic) BOOL hasHeBSSLoadIE;
@property (retain, nonatomic) NSData *heBSSLoadIE;
@property (readonly, nonatomic) BOOL hasMuEDCAParametersIE;
@property (retain, nonatomic) NSData *muEDCAParametersIE;
@property (nonatomic) BOOL hasHeMacCapSubfields;
@property (nonatomic) unsigned int heMacCapSubfields;
@property (nonatomic) BOOL hasHePhyCapSubfields;
@property (nonatomic) unsigned int hePhyCapSubfields;
@property (nonatomic) BOOL hasHeRxTxMcsMap;
@property (nonatomic) unsigned int heRxTxMcsMap;
@property (nonatomic) BOOL hasHeOpsParams;
@property (nonatomic) unsigned int heOpsParams;
@property (nonatomic) BOOL hasHeBssMcsNss;
@property (nonatomic) unsigned int heBssMcsNss;
@property (nonatomic) BOOL hasHeStaCnt;
@property (nonatomic) unsigned int heStaCnt;
@property (nonatomic) BOOL hasHeUtilization;
@property (nonatomic) unsigned int heUtilization;
@property (nonatomic) BOOL hasHeBEParamRecord;
@property (nonatomic) unsigned int heBEParamRecord;
@property (nonatomic) BOOL hasHeBKParamRecord;
@property (nonatomic) unsigned int heBKParamRecord;
@property (nonatomic) BOOL hasHeVIParamRecord;
@property (nonatomic) unsigned int heVIParamRecord;
@property (nonatomic) BOOL hasHeVOParamRecord;
@property (nonatomic) unsigned int heVOParamRecord;

- (int)fwTxFrmsHistoryAtIndex:(unsigned long long)a0;
- (int)txPerHistoryAtIndex:(unsigned long long)a0;
- (int)txFrmsHistoryAtIndex:(unsigned long long)a0;
- (void)setBcnPerHistorys:(int *)a0 count:(unsigned long long)a1;
- (void)clearFwTxFrmsHistorys;
- (void)addFwTxFrmsHistory:(int)a0;
- (void)clearBcnFrmsHistorys;
- (void)setRssiHistorys:(int *)a0 count:(unsigned long long)a1;
- (void)addTxFrmsHistory:(int)a0;
- (void)clearTxFrmsHistorys;
- (void)addFwTxPerHistory:(int)a0;
- (void)setTxFrmsHistorys:(int *)a0 count:(unsigned long long)a1;
- (void)setBcnFrmsHistorys:(int *)a0 count:(unsigned long long)a1;
- (void)clearTxPerHistorys;
- (void)setFwTxPerHistorys:(int *)a0 count:(unsigned long long)a1;
- (int)bcnFrmsHistoryAtIndex:(unsigned long long)a0;
- (void)addRssiHistory:(int)a0;
- (void)addTxPerHistory:(int)a0;
- (void)addBcnFrmsHistory:(int)a0;
- (int)fwTxPerHistoryAtIndex:(unsigned long long)a0;
- (int)rssiHistoryAtIndex:(unsigned long long)a0;
- (void)setFwTxFrmsHistorys:(int *)a0 count:(unsigned long long)a1;
- (void)clearRssiHistorys;
- (void)clearFwTxPerHistorys;
- (void)setTxPerHistorys:(int *)a0 count:(unsigned long long)a1;
- (void)addBcnPerHistory:(int)a0;
- (void)clearBcnPerHistorys;
- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (int)bcnPerHistoryAtIndex:(unsigned long long)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;

@end