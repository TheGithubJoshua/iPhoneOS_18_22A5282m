@interface BMTombstoneEventEnumerator : BMStoreEnumeratorBase

- (id)_eventWithFrameStore:(id)a0 frame:(id)a1 error:(unsigned char)a2;
- (id)peekEvent;
- (id)nextTombstoneEvent;
- (id)peekTombstoneEvent;
- (id)_originaleventWithFrameStore:(id)a0 frame:(id)a1 error:(unsigned char)a2;
- (id)nextEvent;

@end
