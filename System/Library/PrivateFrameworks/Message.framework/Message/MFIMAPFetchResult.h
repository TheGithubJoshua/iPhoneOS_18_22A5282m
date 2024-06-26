@class NSArray, NSString, NSData, NSDate;

@interface MFIMAPFetchResult : NSObject {
    int _itemType;
    unsigned long long _modSequenceNumber;
    union { NSArray *envelope; NSDate *internalDate; unsigned long long messageSize; NSArray *bodyStructure; NSArray *appleRemoteLinks; struct { NSString *section; unsigned long long startOffset; NSData *sectionData; } bodySectionInfo; unsigned int uid; unsigned long long uniqueRemoteId; struct { unsigned long long messageFlags; NSArray *customFlags; } flags; } _typeSpecific;
}

- (void)setUid:(unsigned int)a0;
- (void)setSection:(id)a0;
- (id)initWithType:(int)a0;
- (id)fetchData;
- (unsigned int)uid;
- (unsigned int)encoding;
- (id)description;
- (unsigned long long)messageSize;
- (void)setMessageSize:(unsigned long long)a0;
- (id)section;
- (void)dealloc;
- (int)type;
- (void)setStartOffset:(unsigned long long)a0;
- (unsigned long long)startOffset;
- (id)appleRemoteLinks;
- (id)bodyStructure;
- (id)customFlagsArray;
- (id)envelope;
- (id)flagsArray;
- (id)internalDate;
- (unsigned long long)messageFlags;
- (unsigned long long)modSequenceNumber;
- (void)setAppleRemoteLinks:(id)a0;
- (void)setBodyStructure:(id)a0;
- (void)setCustomFlagsArray:(id)a0;
- (void)setEnvelope:(id)a0;
- (void)setFetchData:(id)a0;
- (void)setFlagsArray:(id)a0;
- (void)setInternalDate:(id)a0;
- (void)setMessageFlags:(unsigned long long)a0;
- (void)setModSequenceNumber:(unsigned long long)a0;
- (void)setUniqueRemoteId:(unsigned long long)a0;
- (unsigned long long)uniqueRemoteId;

@end
