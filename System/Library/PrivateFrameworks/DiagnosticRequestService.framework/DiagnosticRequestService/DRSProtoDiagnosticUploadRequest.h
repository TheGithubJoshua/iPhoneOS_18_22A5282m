@class DRSProtoRequestDescription, NSString, NSMutableArray;

@interface DRSProtoDiagnosticUploadRequest : PBRequest <NSCopying>

@property (readonly, nonatomic) BOOL hasRequestDescription;
@property (retain, nonatomic) DRSProtoRequestDescription *requestDescription;
@property (readonly, nonatomic) BOOL hasIssueDescription;
@property (retain, nonatomic) NSString *issueDescription;
@property (retain, nonatomic) NSMutableArray *logs;

+ (Class)logsType;

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
- (void)addLogs:(id)a0;
- (void)clearLogs;
- (id)logsAtIndex:(unsigned long long)a0;
- (unsigned long long)logsCount;

@end
