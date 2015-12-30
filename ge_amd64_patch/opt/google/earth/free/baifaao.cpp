/* /opt/googleearth/baifaao.cpp */
#include <QtCore/QAtomicInt>
extern "C" {
	int _Z34QBasicAtomicInt_fetchAndAddOrderedPVii(QAtomicInt* a, int b) {
		return a->fetchAndAddOrdered(b);
	}
}