@class NSString, NSMutableArray;

@interface PFLFetchTasksResponse : PBCodable <CKCodeOperationMessageMutation, NSCopying>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSMutableArray *tasks;

+ (Class)tasksType;

- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addTasks:(id)a0;
- (void)clearTasks;
- (id)tasksAtIndex:(unsigned long long)a0;
- (unsigned long long)tasksCount;

@end
