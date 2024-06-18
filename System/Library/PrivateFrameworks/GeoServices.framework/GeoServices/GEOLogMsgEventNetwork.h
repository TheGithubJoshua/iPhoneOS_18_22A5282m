@class NSString, GEONetworkSessionTaskTransactionMetrics, PBDataReader;

@interface GEOLogMsgEventNetwork : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSString *_manifestEnv;
    NSString *_requestAppIdMajorVer;
    NSString *_requestAppIdMinorVer;
    NSString *_requestAppIdentifier;
    double _requestEnd;
    long long _requestErrorCode;
    NSString *_requestErrorDescription;
    NSString *_requestErrorDomain;
    double _requestStart;
    NSString *_serviceIpAddress;
    GEONetworkSessionTaskTransactionMetrics *_taskMetrics;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _decodeTime;
    int _httpResponseCode;
    int _mptcpServiceType;
    int _networkService;
    int _queuedTime;
    int _redirectCount;
    int _requestDataSize;
    int _responseDataSize;
    unsigned int _samplingRate;
    unsigned int _tilesetId;
    int _totalTime;
    BOOL _mptcpNegotiated;
    BOOL _rnfTriggered;
    BOOL _wasBackground;
    struct { unsigned char has_requestEnd : 1; unsigned char has_requestErrorCode : 1; unsigned char has_requestStart : 1; unsigned char has_decodeTime : 1; unsigned char has_httpResponseCode : 1; unsigned char has_mptcpServiceType : 1; unsigned char has_networkService : 1; unsigned char has_queuedTime : 1; unsigned char has_redirectCount : 1; unsigned char has_requestDataSize : 1; unsigned char has_responseDataSize : 1; unsigned char has_samplingRate : 1; unsigned char has_tilesetId : 1; unsigned char has_totalTime : 1; unsigned char has_mptcpNegotiated : 1; unsigned char has_rnfTriggered : 1; unsigned char has_wasBackground : 1; unsigned char read_manifestEnv : 1; unsigned char read_requestAppIdMajorVer : 1; unsigned char read_requestAppIdMinorVer : 1; unsigned char read_requestAppIdentifier : 1; unsigned char read_requestErrorDescription : 1; unsigned char read_requestErrorDomain : 1; unsigned char read_serviceIpAddress : 1; unsigned char read_taskMetrics : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) BOOL hasNetworkService;
@property (nonatomic) int networkService;
@property (nonatomic) BOOL hasRequestDataSize;
@property (nonatomic) int requestDataSize;
@property (nonatomic) BOOL hasResponseDataSize;
@property (nonatomic) int responseDataSize;
@property (readonly, nonatomic) BOOL hasRequestErrorDomain;
@property (retain, nonatomic) NSString *requestErrorDomain;
@property (nonatomic) BOOL hasRequestErrorCode;
@property (nonatomic) long long requestErrorCode;
@property (readonly, nonatomic) BOOL hasRequestErrorDescription;
@property (retain, nonatomic) NSString *requestErrorDescription;
@property (readonly, nonatomic) BOOL hasRequestAppIdentifier;
@property (retain, nonatomic) NSString *requestAppIdentifier;
@property (nonatomic) BOOL hasQueuedTime;
@property (nonatomic) int queuedTime;
@property (nonatomic) BOOL hasTotalTime;
@property (nonatomic) int totalTime;
@property (nonatomic) BOOL hasHttpResponseCode;
@property (nonatomic) int httpResponseCode;
@property (nonatomic) BOOL hasDecodeTime;
@property (nonatomic) int decodeTime;
@property (nonatomic) BOOL hasRequestStart;
@property (nonatomic) double requestStart;
@property (nonatomic) BOOL hasRequestEnd;
@property (nonatomic) double requestEnd;
@property (nonatomic) BOOL hasRedirectCount;
@property (nonatomic) int redirectCount;
@property (readonly, nonatomic) BOOL hasManifestEnv;
@property (retain, nonatomic) NSString *manifestEnv;
@property (nonatomic) BOOL hasTilesetId;
@property (nonatomic) unsigned int tilesetId;
@property (nonatomic) BOOL hasMptcpServiceType;
@property (nonatomic) int mptcpServiceType;
@property (nonatomic) BOOL hasMptcpNegotiated;
@property (nonatomic) BOOL mptcpNegotiated;
@property (nonatomic) BOOL hasWasBackground;
@property (nonatomic) BOOL wasBackground;
@property (readonly, nonatomic) BOOL hasServiceIpAddress;
@property (retain, nonatomic) NSString *serviceIpAddress;
@property (nonatomic) BOOL hasRnfTriggered;
@property (nonatomic) BOOL rnfTriggered;
@property (readonly, nonatomic) BOOL hasRequestAppIdMajorVer;
@property (retain, nonatomic) NSString *requestAppIdMajorVer;
@property (readonly, nonatomic) BOOL hasRequestAppIdMinorVer;
@property (retain, nonatomic) NSString *requestAppIdMinorVer;
@property (nonatomic) BOOL hasSamplingRate;
@property (nonatomic) unsigned int samplingRate;
@property (readonly, nonatomic) BOOL hasTaskMetrics;
@property (retain, nonatomic) GEONetworkSessionTaskTransactionMetrics *taskMetrics;

+ (BOOL)isValid:(id)a0;

- (id)init;
- (id)initWithDictionary:(id)a0;
- (void)readAll:(BOOL)a0;
- (void)mergeFrom:(id)a0;
- (int)StringAsMptcpServiceType:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (int)StringAsNetworkService:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithData:(id)a0;
- (id)networkServiceAsString:(int)a0;
- (id)mptcpServiceTypeAsString:(int)a0;
- (id)jsonRepresentation;

@end