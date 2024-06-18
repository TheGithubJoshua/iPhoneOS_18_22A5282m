@interface HMDTokenBasedStructuredReader : HMDStructuredReader {
    struct _HMDStructuredDataToken { long long type; id value; } _token;
}

- (id)readString;
- (void)failWithError:(id)a0;
- (id)readData;
- (void)endArray;
- (void).cxx_destruct;
- (unsigned long long)beginDictionary;
- (void)endDictionary;
- (unsigned long long)beginArray;
- (id)readDate;
- (id)error;
- (long long)tokenType;
- (struct _HMDStructuredDataToken { long long x0; id x1; })nextTokenAfterToken:(const struct _HMDStructuredDataToken { long long x0; id x1; } *)a0;
- (BOOL)readBoolean;
- (id)readDictionaryKey;
- (void)readNull;
- (id)readNumber;
- (struct _HMDStructuredDataToken { long long x0; id x1; })readToken;
- (id)readUUID;
- (void)skipToken;

@end
