using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class enemy_spawner : MonoBehaviour
{
    [SerializeField]
    private GameObject[] monsterReference;

    // after adding the enemies in the monsterReference in the engine
    // we have created an array called monsterReference and we could
    // access its length by monsterReference.length


    private GameObject spawnedMonster;

    [SerializeField]
    private Transform leftPos1, rightPos1, rightPos3, rightPos2;

    private int randomIndex;
    private int randomSide;

    // Start is called before the first frame update
    void Start()
    {
        StartCoroutine(spawnMonsters());
    }

    IEnumerator spawnMonsters()
    {
        while (true)
        {
            yield return new WaitForSeconds(Random.Range(1, 2));

            randomIndex = Random.Range(0, monsterReference.Length);
            randomSide = Random.Range(0, 4);

            spawnedMonster = Instantiate(monsterReference[randomIndex]);

            if (randomSide == 0)
            {
                //leftSide
                spawnedMonster.transform.position = leftPos1.position;
                spawnedMonster.GetComponent<enemies>().speed = Random.Range(4f, 10f);
            }
            else if(randomSide == 1)
            {
                //rightSide
                spawnedMonster.transform.position = rightPos1.position;
                spawnedMonster.GetComponent<enemies>().speed = -Random.Range(4, 10);
                spawnedMonster.transform.localScale = new Vector3(-1f, 1f, 1f);
            }
            else if (randomSide == 2)
            {
                //rightSide
                spawnedMonster.transform.position = rightPos2.position;
                spawnedMonster.GetComponent<enemies>().speed = -Random.Range(4, 10);
                spawnedMonster.transform.localScale = new Vector3(-1f, 1f, 1f);
            }
            else
            {
                //rightSide
                spawnedMonster.transform.position = rightPos3.position;
                spawnedMonster.GetComponent<enemies>().speed = -Random.Range(4, 10);
                spawnedMonster.transform.localScale = new Vector3(-1f, 1f, 1f);
            }

        }//while loop
    }






}//class

