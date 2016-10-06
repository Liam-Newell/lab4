#pragma once
#ifndef W4_KVLIST_H_
#define W4_KVLIST_H_


template<class K,class V,size_t N>
class KVList 
{
	K k[N];
	V v[N];
	size_t N;

public:
	KVList() { k = 0; v = 0; n = 0; };
	size_t size() const { return n; };
	const K& key(int i) const;
	const V& value(int i) const;
	KVList& add(const K&, const V&);
	int find(const K& k) const;
	KVList& replace(int i, const K& k, const V& v);


};


#endif
