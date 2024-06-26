@class NSObject, NSUUID, ObjCVersion, ObjCReplica;

@interface CRTTMergeableString : NSObject {
    struct vector<TopoSubstring *, std::allocator<TopoSubstring *>> { struct TopoSubstring **__begin_; struct TopoSubstring **__end_; struct __compressed_pair<TopoSubstring **, std::allocator<TopoSubstring *>> { struct TopoSubstring **__value_; } __end_cap_; } _orderedSubstrings;
    unsigned long long _editCount;
    BOOL _cacheInvalid;
    CRTTMergeableString *_renamedString;
}

@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) struct TopoReplica { unsigned char uuid[16]; unsigned int index; } replica;
@property (retain, nonatomic) ObjCVersion *version;
@property (nonatomic) long long localCounter;
@property (readonly, nonatomic) ObjCReplica *addedByReplica;
@property (retain, nonatomic) ObjCVersion *addedByVersion;
@property (nonatomic) long long addedByLocalCounter;
@property (retain, nonatomic) id attributedString;
@property (nonatomic) void *startNode;
@property (nonatomic) void *endNode;
@property (nonatomic) long long renameGeneration;
@property (retain, nonatomic) NSObject *context;
@property (readonly, nonatomic) BOOL isEmptyCRDT;

- (void)invalidateCache;
- (void)removeAll;
- (void)_updateCache;
- (void)removeObjectsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void)endEditing;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (unsigned long long)length;
- (void)beginEditing;
- (void)enumerateIndexes:(id /* block */)a0;
- (id)characterRangesForSelection:(id)a0;
- (id)selectionForCharacterRanges:(id)a0 selectionAffinity:(unsigned long long)a1;
- (id)dotDescription:(unsigned long long)a0;
- (BOOL)canMergeString:(id)a0;
- (id)replicaUUIDForCharacterAtIndex:(unsigned long long)a0;
- (id)characterRangesForSelection:(id)a0 selectedSubstringsBlock:(id /* block */)a1;
- (void)coalesce;
- (void)deleteSubstrings:(void *)a0 withCharacterRanges:(void *)a1;
- (void)enumerateSubstrings:(id /* block */)a0;
- (void)getCharacterRanges:(void *)a0 forSubstrings:(void *)a1;
- (void *)getSubstringBeforeTopoID:(struct TopoID { struct TopoReplica { unsigned char x0[16]; unsigned int x1; } x0; unsigned int x1; })a0;
- (void)getSubstrings:(void *)a0 forCharacterRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)getSubstrings:(void *)a0 forTopoIDRange:(struct TopoIDRange { struct TopoID { struct TopoReplica { unsigned char x0[16]; unsigned int x1; } x0; unsigned int x1; } x0; unsigned int x1; })a1;
- (void)getSubstrings:(void *)a0 inOrderedSubstrings:(void *)a1 forCharacterRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (BOOL)graphIsEqual:(id)a0;
- (void *)orderedSubstrings;
- (id)selectionForCharacterRanges:(id)a0;
- (void)sortSplitNodes;
- (void *)splitTopoSubstring:(void *)a0 atIndex:(unsigned int)a1;
- (void)traverseUnordered:(id /* block */)a0;
- (void)undeleteSubstrings:(void *)a0;
- (void)updateAttributedStringAfterMerge;
- (void)updateSubstringIndexes;
- (void)_apply:(id)a0;
- (id)undoCommandToChangeTo:(id)a0 unedited:(id /* block */)a1;
- (unsigned long long)_characterIndexForIndex:(id)a0;
- (void)_deltaTo:(id)a0 added:(id /* block */)a1 deleted:(id /* block */)a2 same:(id /* block */)a3;
- (void)addNewAddedByFor:(void *)a0;
- (void)apply:(id)a0 skipRetain:(BOOL)a1;
- (void)applyRenamesAndRetainOrRelease:(id)a0 context:(id)a1 alsoApplyAllRenames:(BOOL)a2;
- (void)applyTimestampRenames:(id)a0;
- (BOOL)canDeltaMerge:(id)a0;
- (unsigned long long)characterIndexForIndex:(id)a0;
- (id)characterRangesForIDRange:(struct TopoIDRange { struct TopoID { struct TopoReplica { unsigned char x0[16]; unsigned int x1; } x0; unsigned int x1; } x0; unsigned int x1; })a0;
- (id)characterRangesForMergeableRange:(id)a0;
- (id)copyRenamedIfAvailable:(BOOL)a0;
- (void)deleteAllSubstrings;
- (BOOL)deltaMerge:(id)a0;
- (void)deltaTo:(id)a0 added:(id /* block */)a1 deleted:(id /* block */)a2 same:(id /* block */)a3;
- (void)deltaTo:(id)a0 edited:(id /* block */)a1 unedited:(id /* block */)a2;
- (void)finalizeTimestamps:(id)a0;
- (id)fullyRenamed:(id)a0;
- (BOOL)hasAllIDsIn:(void *)a0;
- (BOOL)hasDeltaTo:(id)a0 compareElements:(id /* block */)a1;
- (id)initWithDecoder:(id)a0 error:(id *)a1;
- (id)initWithStorage:(id)a0 uuid:(id)a1;
- (id)initWithStorage:(id)a0 uuid:(id)a1 createInitialNodes:(BOOL)a2;
- (void)insertAtIndex:(long long)a0 length:(long long)a1 getStorage:(id /* block */)a2;
- (void)insertStorageLength:(long long)a0 after:(void *)a1 before:(void *)a2 getStorage:(id /* block */)a3;
- (unsigned long long)mergeWithString:(id)a0 optimized:(BOOL)a1;
- (id)mergeableIndexForCharacterIndex:(long long)a0 affinity:(unsigned long long)a1;
- (BOOL)needToFinalizeTimestamps;
- (id)objcReplica;
- (id)renamed:(id)a0;
- (id)renamedIfAvailable;
- (void)replaceStorageInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withStorage:(id)a1;
- (BOOL)saveSubstrings:(void *)a0 encoder:(id)a1 error:(id *)a2;
- (BOOL)saveToEncoder:(id)a0 error:(id *)a1;
- (void)stealReplicaFrom:(id)a0;
- (long long)substringCount;
- (id)temporaryConcurrentNames;
- (id)temporaryNamesExcludingSelf:(BOOL)a0;
- (void)useRenameIfAvailable;

@end
