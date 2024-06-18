@class PLDetectedFace;

@interface PLDetectedFaceComputePayloadAdapter : NSObject <PLJournalEntryPayloadUpdateAdapter> {
    PLDetectedFace *_face;
}

- (id)payloadID;
- (id)payloadForChangedKeys:(id)a0;
- (id)payloadIDForTombstone:(id)a0;
- (id)payloadsForChangedKeys:(id)a0;
- (void).cxx_destruct;
- (BOOL)isValidForJournalPersistence;
- (id)initWithDetectedFace:(id)a0;
- (id)payloadIDsByPayloadClassIDToDeleteOnInsert;
- (BOOL)validForPersistenceChangedForChangedKeys:(id)a0;

@end
