@class NSArray, NSData;

@interface NLXSchemaCDMNLContext : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *activeTasks;
@property (copy, nonatomic) NSArray *executedTasks;
@property (copy, nonatomic) NSArray *salientEntities;
@property (copy, nonatomic) NSArray *systemDialogActs;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)addActiveTasks:(id)a0;
- (id)activeTasksAtIndex:(unsigned long long)a0;
- (unsigned long long)activeTasksCount;
- (void)addExecutedTasks:(id)a0;
- (void)addSalientEntities:(id)a0;
- (void)addSystemDialogActs:(id)a0;
- (void)clearActiveTasks;
- (void)clearExecutedTasks;
- (void)clearSalientEntities;
- (void)clearSystemDialogActs;
- (void)deleteActiveTasks;
- (void)deleteExecutedTasks;
- (void)deleteSalientEntities;
- (void)deleteSystemDialogActs;
- (id)executedTasksAtIndex:(unsigned long long)a0;
- (unsigned long long)executedTasksCount;
- (id)salientEntitiesAtIndex:(unsigned long long)a0;
- (unsigned long long)salientEntitiesCount;
- (id)systemDialogActsAtIndex:(unsigned long long)a0;
- (unsigned long long)systemDialogActsCount;

@end
