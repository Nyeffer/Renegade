using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public interface IDamageable<t> {
	void SetDamage(t damage);
	t GetDamage();
}
